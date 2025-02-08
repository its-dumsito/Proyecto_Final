#include <iostream>
#include <string>

using namespace std;

// Estructura para representar una reserva
struct Reserva {
    string nombreCliente;
    int numeroPersonas;
    string fecha;
    string hora;
};

int main() {
    Reserva reserva; // Variable para almacenar la reserva

    cout << "Ingrese el nombre del cliente: ";
    cin >> reserva.nombreCliente; // Lee solo la primera palabra del nombre

    cout << "Ingrese el número de personas: ";
    cin >> reserva.numeroPersonas;

    cout << "Ingrese la fecha (dd/mm/aaaa): ";
    cin >> reserva.fecha;

    cout << "Ingrese la hora (hh:mm): ";
    cin >> reserva.hora;

    cout << "\nReserva creada con éxito.\n";

    // Mostrar los detalles de la reserva
    cout << "\nDetalles de la reserva:\n";
    cout << "Cliente: " << reserva.nombreCliente << endl;
    cout << "Número de personas: " << reserva.numeroPersonas << endl;
    cout << "Fecha: " << reserva.fecha << endl;
    cout << "Hora: " << reserva.hora << endl;

    return 0;
}

//Prueba
