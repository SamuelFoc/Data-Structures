function say_hello() {
  console.log("Hello, World!");
}

function add(a, b) {
  return a + b;
}

const subtract = (a, b) => {
  return a - b;
};

function main() {
  say_hello();
  console.log(`5 + 2 = ${add(5, 2)}`);
  console.log("5 - 2 =", subtract(5, 2));
}

main();
