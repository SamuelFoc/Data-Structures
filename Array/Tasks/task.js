function restrict_string_length(arr, min_length) {
    var restricted_arr = arr.filter(function (item) { return item.length >= min_length; });
    return restricted_arr;
}
var strings = ["Banana", "Car", "Guitar", "Xylophone", "Kaka", "Nutrition"];
var restricted_arr = restrict_string_length(strings, 4);
console.log("Restricted strings: ".concat(restricted_arr));
