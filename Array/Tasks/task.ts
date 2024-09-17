function restrict_string_length(
  arr: Array<string>,
  min_length: number
): Array<string> {
  let restricted_arr = arr.filter((item) => item.length >= min_length);
  return restricted_arr;
}

let strings = ["Banana", "Car", "Guitar", "Xylophone", "Kaka", "Nutrition"];

const restricted_arr = restrict_string_length(strings, 4);

console.log(`Restricted strings: ${restricted_arr}`);
