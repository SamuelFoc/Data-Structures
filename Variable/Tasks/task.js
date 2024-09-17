function convert_array_into_object(array) {
    var result = {};
    array.forEach(function (key) {
        result[key] = key.length;
    });
    return result;
}
var array_of_strings = ["Banana", "Mango", "Lemon"];
var converted_object = convert_array_into_object(array_of_strings);
console.log("This is my object: ".concat(JSON.stringify(converted_object)));
