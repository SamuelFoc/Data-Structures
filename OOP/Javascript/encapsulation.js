class Vehicle {
  // Make the parameters private
  #manufacturer;
  #model;
  #year;
  #lastService;

  constructor(manufacturer, model, year) {
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
}

function main() {
  const vehicle = new Vehicle("Ford", "Focus", 2007);

  vehicle.getInfo();
  vehicle.getLastServiceDate();

  // We are accessing the vehicle property through its method and not directly
  vehicle.serviceVehicle();
  vehicle.getLastServiceDate();
}

main();
