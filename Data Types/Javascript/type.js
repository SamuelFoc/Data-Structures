// Maximum number (IEEE 754 floating point)
var maxNumber = 1.7976931348623157e308; // Largest double-precision float
// Maximum safe integer (largest integer that can be safely represented in JavaScript)
var maxSafeInteger = 9007199254740991; // Maximum safe integer in JavaScript (2^53 - 1)
// BigInt to represent arbitrarily large integers
var bigIntValue = 900719925474099123456789123456789n; // BigInt for very large integers
// Very large string
var longString = "A".repeat(1000); // A long string with 1000 'A' characters
// Boolean max (true)
var maxBoolean = true; // Boolean can only be true or false
// Array of maximum safe integers
var intArray = [
    9007199254740991, 9007199254740991, 9007199254740991, 9007199254740991,
    9007199254740991,
]; // Array of large numbers
// Enum-like structure (TypeScript/JavaScript doesn't have traditional enums)
var Color = Object.freeze({
    RED: 1,
    GREEN: 2,
    BLUE: 100, // Max enum-like value
});
var maxEnum = Color.BLUE; // The highest enum value
// Tuple-like array (TypeScript uses tuples, JavaScript uses arrays)
var tuple = [
    "MaxTuple",
    1.7976931348623157e308,
    9007199254740991,
];
// Object with maximum values
var person = {
    name: "MaxPerson",
    age: 9007199254740991, // Max safe integer
    wealth: 900719925474099123456789123456789n, // BigInt for a huge number
};
// Function that returns void (undefined in JS/TypeScript)
function logMessage() {
    console.log("Logging the maximum values");
}
// Output the values
console.log("Max number:", maxNumber);
console.log("Max safe integer:", maxSafeInteger);
console.log("BigInt value:", bigIntValue.toString()); // Convert BigInt to string for display
console.log("Long string:", longString.slice(0, 50) + "... (total length: " + longString.length + ")"); // Only display part of the string
console.log("Max boolean:", maxBoolean);
console.log("Array of max safe integers:", intArray);
console.log("Max enum-like value (Color):", maxEnum);
console.log("Tuple:", tuple);
console.log("Person: Name=".concat(person.name, ", Age=").concat(person.age, ", Wealth=").concat(person.wealth));
logMessage();
