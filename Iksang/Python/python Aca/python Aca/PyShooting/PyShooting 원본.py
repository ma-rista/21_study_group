from os import access
import random
from time import sleep

import pygame
from pygame.constants import QUIT, SCRAP_SELECTION
from pygame.event import pump
WINDOW_WIDTH = 480
WINDOW_HEIGHT = 640

BLACK = (0,0,0)
WHITE = (225,225,225)
YELLOW = (250,250,50)
RED = (250, 50, 50)

FPS = 60

class Fighter(pygame.sprite.Sprite):
    def __ini__(self):
        super(Fighter,self).__init__()
        self.image = pygame.image.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/fighter.png')
        self.rect =self.image.get.rect()
        self.rect.x = int(WINDOW_WIDTH / 2)
        self.rect.y = WINDOW_HEIGHT - self.rect.height
        self.dx = 0
        self.dy = 0
    
    def update(self):
        self.rect.x += self.dx
        self.rect.y += self.dy

        if self.rect.x < 0 or self.rect.x + self.rect.width > WINDOW_WIDTH:
            self.rect.x -= self.dx

        if self.rect.y < 0 or self.rect.y + self.rect.height > WINDOW_HEIGHT:
            self.rect.y -= self.dy
    
    def draw(self, screen):
        screen.blit(self.image, self.rect)

    def collide(self, sprites):
        for sprite in sprites:
            if pygame.sprite.collide_rect(self, sprite):
                return sprite


class Missile(pygame.sprite.Sprite):
    def __init__(self, xpos, ypos, speed):
        super(Missile, self).__init__()
        self.image = pygame.image.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/missile.png')
        self.rect = self.image.get_rect()
        self.rect.x = xpos
        self.rect.y = ypos
        self.speed = speed
        self.sound = pygame.mixer.Sound('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/missile.wav')

    def launch(self):
        self.sound.play()

    def update(self):
        self.rect.y -= self.speed
        if self.rect.y + self.rect.height < 0:
            self.kill()


    def collide(self, sprites):
        for sprite in sprites:
            if pygame.sprite.collide_rect(self, sprite):
                return sprite


class Rock(pygame.sprite.Sprite):
    def __init__(self, xpos, ypos, speed):
        super(Rock, self).__init__()
        rock_images = ('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/rock01.png','/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/rock02.png')
        self.image = pygame.image.load(random.choice(rock_images))
        self.rect = self.image.get_rect()
        self.rect.x = xpos
        self.rect.y = ypos
        self.speed = speed
    
    def update(self):
        self.rect.y += self.speed

    def out_of_screen(self):
        if self.rect.y > WINDOW_HEIGHT:
            return True


def draw_text(text, font, surface, x,y,main_color):
    text_obj = font.render(text, True, main_color)
    text_rect = text_obj.get_rect()
    text_rect.centerx = x
    text_rect.centery = y
    surface.blit(text_obj, text_rect)


def occur_explosion(surface,x,y):
    explosion_image = pygame.image.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/explosion.png')
    explosion_rect = explosion_image.get_rect()
    explosion_rect.x = x
    explosion_rect.y = y
    surface.blit(explosion_image,explosion_rect)

    explosion_sounds = ('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/explosion01.wav','/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/explosion02.wav','/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/explosion03.wav',)
    explosion_sound =  pygame.mixer.Sound(random.choice(explosion_sounds))
    explosion_sounds.play()


def game_loop():
    default_font = pygame.font.Font('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/NanumGothic.ttf', 28)
    background_image = pygame.image.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/background.png')
    gameover_sound = pygame.mixer.Sound('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/gameover.wav')
    pygame.mixer.music.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/music.wav')
    pygame.mixer.music.play(-1)
    fps_clock = pygame.time.Clock()

    fighter = Fighter()
    missile = pygame.sprite.Group()
    rocks = pygame.sprite.Group()

    occur_prob = 40
    shot_count = 0
    count_missed = 0

    done = False
    while not done:
        for event in pygame.event.get():
            if event.type == pygame.KEYDOWN:
                if __name__ == '__main__':
                    if event.key == pygame.K_LEFT:
                        fighter.dx -= 5
                    elif event.key == pygame.K_RIGHT:
                        fighter.dx += 5
                    elif event.key == pygame.K_UP:
                        fighter.dy -= 5
                    elif event.key == pygame.K_DOWN:
                        fighter.dy += 5
                    elif event.key == pygame.K_SPACE:
                        missile = Missile(fighter.rect.centerx, fighter.rect.y, 10)
                        missile.launch()
                        missile.add(missile)

                if event.type == pygame.KEYUP:
                    if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                        fighter.dx = 0
                    elif event.key == pygame.K_UP or event.key == pygame.K_DOWN:
                        fighter.dy = 0
        screen.blit(background_image, background_image.get_rect())

        occor_of_rocks = 1 + int(shot_count / 300)
        min_rock_speed = 1 + int(shot_count / 200)
        max_rock_speed = 1 + int(shot_count / 100)

        if random.randint(1, occur_prob) == 1:
            for i in range(occor_of_rocks):
                speed = random.randint(min_rock_speed, max_rock_speed)
                rock = Rock(random.randint(0, WINDOW_WIDTH - 30),0,speed)
                rocks.add(rock)

        draw_text('파괴한 운석: {}'.format(shot_count), default_font, screen, 100, 20, YELLOW)
        draw_text('놓친 운석: {}'.format(count_missed), default_font, screen, 100, 20, RED)

        for missile in missile:
            rock = missile.collide(rocks)
            if rock:
                missile.kill()
                rock.kill()
                occur_explosion(screen, rock.rect.x, rock.rect.y)
                shot_count += 1

        for rock in rocks:
            if rock.out_of_screen():
                rock.kill()
                count_missed += 1

        rocks.update()
        rocks.draw(screen)
        missile.update()
        missile.draw(screen)
        fighter.update()
        fighter.draw(screen)
        pygame.display.flip()

        if fighter.collide(rocks) or count_missed >= 3: 
            pygame.mixer_music.stop()
            occur_explosion(screen, fighter.rect.x, fighter.rect.y)
            pygame.display.update()
            gameover_sound.play()
            sleep(1)
            done = True

        fps_clock.tick(FPS)

    return 'game_menu'


def game_menu():
    start_image = pygame.image.load('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/background.png')
    screen.blit(start_image, [0,0])
    draw_x = int(WINDOW_WIDTH /2 )
    draw_y = int(WINDOW_HEIGHT/4 )
    font_70 = pygame.font.Font('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/NanumGothic.ttf', 70)
    font_40 = pygame.font.Font('/Users/Han-woojin/Documents/GitHub/21_study_group/Iksang/Python/python Aca/python Aca/PyShooting/NanumGothic.ttf', 40)

    draw_text('슈팅게임!', font_70, screen, draw_x, draw_y, YELLOW)
    draw_text('엔터 키를 누르면', font_40, screen, draw_x, draw_y + 200, WHITE)
    draw_text('슈팅게임!', font_70, screen, draw_x, draw_y + 250, WHITE)

    pygame.display.update()

    for event in pygame.event.get():
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RETURN:
                return 'play'
        if event.type == QUIT:
            return 'QUIT'
    
    return 'game_menu'

def main():
    global screen
    
    pygame.init()
    screen = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
    pygame.display.set_caption('PyShooting')

    action = 'game_menu'
    while action != 'quit':
        if action == 'game_menu':
            action = game_menu()
        elif action == 'play':
            action = game_loop()


    pygame.quit()


if __name__ == "__main__":
    main()


    


