// Defining an array
let arr = [1, 2, 3, 4];
console.log(arr); // Output: [1, 2, 3, 4]

// Accessing an array item
console.log(`Item at index 0: ${arr[0]}`); // Output: Item at index 0: 1

// Modifying an array item
arr[0] = 2;
console.log(`Modified item at index 0: ${arr}`); // Output: Modified item at index 0: [2, 2, 3, 4]

// Adding an element to the end of the array
arr.push(5);
console.log(`Array after appending 5: ${arr}`); // Output: Array after appending 5: [2, 2, 3, 4, 5]

// Inserting an element at a specific index
arr.splice(2, 0, 10); // Inserts 10 at index 2
console.log(`Array after inserting 10 at index 2: ${arr}`); // Output: Array after inserting 10 at index 2: [2, 2, 10, 3, 4, 5]

// Removing an element by index
arr.splice(1, 1); // Removes the element at index 1
console.log(`Array after removing item at index 1: ${arr}`); // Output: Array after removing item at index 1: [2, 10, 3, 4, 5]

// Removing an element from the end of the array
arr.pop(); // Removes the last element
console.log(`Array after popping last item: ${arr}`); // Output: Array after popping last item: [2, 10, 3, 4]

// Checking the length of the array
console.log(`Length of array: ${arr.length}`); // Output: Length of array: 4

// Slicing an array (getting a subarray)
let slicedArr = arr.slice(1, 3);
console.log(`Sliced array (index 1 to 3): ${slicedArr}`); // Output: [10, 3]

// Concatenating arrays
let newArr = arr.concat([6, 7, 8]);
console.log(`Array after concatenation: ${newArr}`); // Output: [2, 10, 3, 4, 6, 7, 8]

// Finding an element
let index = arr.indexOf(10);
console.log(`Index of element 10: ${index}`); // Output: Index of element 10: 1

// Checking if an element exists
let hasThree = arr.includes(3);
console.log(`Array contains 3: ${hasThree}`); // Output: Array contains 3: true

// Iterating through an array
arr.forEach((item, index) => {
  console.log(`Item at index ${index}: ${item}`);
});
// Output:
// Item at index 0: 2
// Item at index 1: 10
// Item at index 2: 3
// Item at index 3: 4
