class Vehicle {
  // Define the constructor for the class
  constructor(manufacturer, model, year) {
    this.manufacturer = manufacturer;
    this.model = model;
    this.year = year;
  }

  explain() {
    console.log(
      "A vehicle is a machine used for transporting people, goods, or equipment from one location to another, typically powered by engines or motors."
    );
  }

  describeYourself() {
    console.log(
      `Manufacturer: ${this.manufacturer}\nModel: ${this.model}\nYear: ${this.year}`
    );
  }
}

function main() {
  const vehicle = new Vehicle("Ford", "Focus", 2007);

  vehicle.describeYourself();
}

main();
