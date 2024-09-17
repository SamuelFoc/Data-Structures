interface Result {
  [key: string]: number;
}

function convert_array_into_object(array: string[]): Result {
  let result: Result = {};

  array.forEach((key) => {
    result[key] = key.length;
  });

  return result;
}

let array_of_strings = ["Banana", "Mango", "Lemon"];

let converted_object = convert_array_into_object(array_of_strings);

console.log(`This is my object: ${JSON.stringify(converted_object)}`);

// npm i -g typescript
// Run this code by: tsc ./Tasks/task.ts (It will compile the code into task.js)
// node ./Tasks/task.js
