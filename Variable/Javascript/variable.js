// Primitive data types
let age = 30; // Number
const pi = 3.14; // Constant number
let name = "John Doe"; // String
let greeting = "Hello, World!"; // String
let isValid = true; // Boolean
let notAssigned; // Undefined
let empty = null; // Null
let uniqueId = Symbol("id"); // Symbol

// Object
let person = {
  name: "John Doe",
  age: 30,
  greet: function () {
    return `Hello, my name is ${this.name}`;
  },
};

// Array
let numbers = [1, 2, 3, 4];
numbers.push(5); // Adding an element to the array

// Function
function greet(name) {
  return `Hello, ${name}!`;
}

// BigInt
let largeNumber = BigInt("123456789012345678901234567890");

// Map
let myMap = new Map();
myMap.set("one", 1);
myMap.set("two", 2);

// Set
let mySet = new Set([1, 2, 3]);
mySet.add(4); // Adding an element to the set

// Logging values
console.log("Age:", age); // Output: Age: 30
console.log("Pi:", pi); // Output: Pi: 3.14
console.log("Name:", name); // Output: Name: John Doe
console.log("Greeting:", greeting); // Output: Hello, World!
console.log("Is Valid:", isValid); // Output: Is Valid: true
console.log("Not Assigned:", notAssigned); // Output: Not Assigned: undefined
console.log("Empty:", empty); // Output: Empty: null
console.log("Unique ID:", uniqueId); // Output: Unique ID: Symbol(id)

// Using objects
console.log("Person:", person); // Output: Person: { name: 'John Doe', age: 30, greet: [Function: greet] }
console.log(person.greet()); // Output: Hello, my name is John Doe

// Using arrays
console.log("Numbers:", numbers); // Output: Numbers: [ 1, 2, 3, 4, 5 ]

// Using functions
console.log(greet("Alice")); // Output: Hello, Alice!

// Using BigInt
console.log("Large Number:", largeNumber); // Output: Large Number: 123456789012345678901234567890n

// Using maps
console.log("Map:", myMap); // Output: Map: Map { 'one' => 1, 'two' => 2 }

// Using sets
console.log("Set:", mySet); // Output: Set: Set { 1, 2, 3, 4 }
