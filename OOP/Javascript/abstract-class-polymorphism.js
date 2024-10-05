// Just for the information, JS doesn't support Abstract classes by itself
// but they can be implemented by the programmer to simulate the behaviour
// of the abstract classes in lower languages.

class AbstractVehicle {
  constructor() {
    // If the "new Vehicle()" is called somewhere the following Error is thrown
    if (new.target === AbstractVehicle) {
      throw new Error("Cannot instantiate abstract class Vehicle directly!");
    }
  }

  // Define virtual method
  serviceVehicle() {
    throw new Error("Method serviceVehicle() must be implemented in subclass!");
  }
}

// Class Vehicle inherits from Abstract Class Abstract Vehicle
class Vehicle extends AbstractVehicle {
  // Make the parameters private
  #manufacturer;
  #model;
  #year;
  #lastService;

  constructor(manufacturer, model, year) {
    // Call the parent's constructor
    super();
    this.#manufacturer = manufacturer;
    this.#model = model;
    this.#year = year;
    this.#lastService = null;
  }

  explain() {
    console.log(
      "A vehicle is a machine used for transporting people, goods, or equipment from one location to another, typically powered by engines or motors."
    );
  }

  getInfo() {
    const info = {
      manufacturer: this.#manufacturer,
      model: this.#model,
      year: this.#year,
    };
    console.log(info);
  }

  getManufacturer() {
    return this.#manufacturer;
  }

  getModel() {
    return this.#model;
  }

  getLastServiceDate() {
    if (!this.#lastService) {
      return console.log("This vehicle was never serviced");
    }
    console.log("Last serviced: ", this.#lastService.toLocaleDateString("uk"));
  }

  serviceVehicle() {
    const today = new Date();
    this.#lastService = today;
    console.log(
      `New last service date set to: ${today.toLocaleDateString("uk")}`
    );
  }

  #myPrivateMetod() {
    console.log("This method can't be accessed directly on the vehicle class!");
  }

  testMyPrivateMethod() {
    console.log("Accessing: myPrivateMethod()");
    this.#myPrivateMetod();
    console.log("Private method has been executed");
  }
}

class Car extends Vehicle {
  #esc;
  constructor(manufacturer, model, year, esc) {
    super(manufacturer, model, year);
    // Add parameter relevant only for cars (Emissions Standards Compliance)
    this.#esc = esc;
  }

  getESC() {
    console.log(
      `The ${this.getManufacturer()} ${this.getModel()} meets ESC-${this.#esc}`
    );
  }
}

function main() {
  const vehicle = new Vehicle("Ford", "Focus", 2007);

  vehicle.getInfo();
  vehicle.getLastServiceDate();

  // We are accessing the vehicle property through its method and not directly
  vehicle.serviceVehicle();
  vehicle.getLastServiceDate();

  // Private method test
  vehicle.testMyPrivateMethod();

  // Test Child Class
  const car = new Car("Ford", "Focus RS", 2020, "Euro 6");
  car.getLastServiceDate();
  car.serviceVehicle();
  car.getESC();
}

main();
