#include <iostream>
using namespace std;

int main() {

    double distance_AB, distance_BC, cargo_weight;

    cout << "Enter the distance between A and B: ";
    cin >> distance_AB;
    cout << "Enter the distance between B and C: ";
    cin >> distance_BC;
    cout << "Enter the weight of the cargo: ";
    cin >> cargo_weight;

    double fuel_needet = 0;

    if (cargo_weight > 2000) {
		cout << "The cargo is too heavy!" << endl;
	}

    else if (cargo_weight <= 500) {
        fuel_needet = distance_BC + distance_AB;
    }

    else if (cargo_weight <= 1000) {
        fuel_needet = (distance_AB / 1) + (distance_BC / 4);
    }

    else if (cargo_weight <= 1500) {
        fuel_needet = (distance_AB / 1) + (distance_BC / 4) + (distance_BC / 7);
    }

    else if (cargo_weight <= 2000) {
		fuel_needet = (distance_AB / 1) + (distance_BC / 4) + (distance_BC / 7) + (distance_BC / 9);
	}

    double fuel_capacity = 300;
    double full_required = fuel_needet / fuel_capacity;

    if (full_required > 0) {
        cout << "To cover the route, you need to refuel the plane with " << full_required << " times" << endl;       
}
    
    else {
		cout << "Overcoming the route is possible without additional refueling" << endl;
	}

   
    return 0;
}
