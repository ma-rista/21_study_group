/* eslint-disable */
'use strict';
//* Objects
//* one of JavaScript's data types.
//* a collection of related data and/or fuctionality.
//* Nearly all objects in JavaScript are instances of Object
//* object = { key : value };

//* 1. Literals and properties
const obj1 = {}; //$ 'object literal' syntax
const obj2 = new Object();  //$ 'object constructor' syntax

function print(Person) {
    console.log(person.name);
    console.log(person.age);
}

const ellie = { name: 'ellie', age: 4 }
print(ellie);

//* with JavaScript magic (dynamically typed language)
//* can add properties later
ellie.hasJob = true;
console.log(ellie.hasJob);

//* 2. Computed properties
//* key shold be always string
console.log(ellie.name);
console.log(ellie['name']);
ellie['hasJob'] = true;
