#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    string codigo;
    Estudiante* siguiente;
};
class ColaEstudiantes {
private:
    Estudiante* frente;
    Estudiante* final;

public:
    ColaEstudiantes() {
        frente = nullptr;
        final = nullptr;
    }
    ~ColaEstudiantes() {
        while (frente != nullptr) {
            atender(); 
        }
    }
    void registrar() {
        string nombre, codigo;
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, nombre);
        cout << "Código: ";
        getline(cin, codigo);

        Estudiante* nuevo = new Estudiante;
        nuevo->nombre = nombre;
        nuevo->codigo = codigo;
        nuevo->siguiente = nullptr;

        if (frente == nullptr) {
            frente = nuevo;
            final = nuevo;
        } else {
            final->siguiente = nuevo;
            final = nuevo;
        }
        cout << "Estudiante registrado correctamente.\n";
    }
    void atender() {
        if (frente == nullptr) {
            cout << "No hay estudiantes en espera.\n";
            return;
        }

        Estudiante* temp = frente;
        cout << "Atendiendo a: " << temp->nombre << " (Código: " << temp->codigo << ")\n";
        frente = frente->siguiente;

        if (frente == nullptr) {
            final = nullptr; 
        }

        delete temp; 
    }
    void mostrar() {
        if (frente == nullptr) {
            cout << "No hay estudiantes en espera.\n";
            return;
        }

        Estudiante* actual = frente;
        int pos = 1;
        cout << "--- Estudiantes en espera (orden de llegada) ---\n";
        while (actual != nullptr) {
            cout << pos << ". " << actual->nombre << " - Código: " << actual->codigo << "\n";
            actual = actual->siguiente;
            pos++;
        }
    }
    void buscar() {
        if (frente == nullptr) {
            cout << "No hay estudiantes en espera.\n";
            return;
        }

        string nombreBuscado;
        cout << "Ingrese el nombre a buscar: ";
        cin.ignore();
        getline(cin, nombreBuscado);

        Estudiante* actual = frente;
        int pos = 1;
        bool encontrado = false;

        while (actual != nullptr) {
            if (actual->nombre == nombreBuscado) {
                cout << "Estudiante encontrado: " << actual->nombre
                     << " (Código: " << actual->codigo << "), posición en la cola: " << pos << "\n";
                encontrado = true;
                break;
            }
            actual = actual->siguiente;
            pos++;
        }

        if (!encontrado) {
            cout << "Estudiante no encontrado.\n";
        }
    }
};

int main() {
    ColaEstudiantes cola;
    int opcion;

    do {
        cout << "\n=== SISTEMA DE GESTIÓN DE TURNOS ===\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Atender estudiante\n";
        cout << "3. Mostrar estudiantes en espera\n";
        cout << "4. Buscar estudiante por nombre\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cola.registrar();
                break;
            case 2:
                cola.atender();
                break;
            case 3:
                cola.mostrar();
                break;
            case 4:
                cola.buscar();
                break;
            case 5:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}
