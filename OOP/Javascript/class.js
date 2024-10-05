// This is a simple Vehicle class with one method
class Vehicle {
  // This is the only method of the class
  explain() {
    console.log(
      "A vehicle is a machine used for transporting people, goods, or equipment from one location to another, typically powered by engines or motors."
    );
  }
}

function main() {
  // Create an instance of the Vehicle class
  const vehicle = new Vehicle();

  // Invoke an explain method from Vehicle class
  vehicle.explain();
}

main();
