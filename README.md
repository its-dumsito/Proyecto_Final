# Sistema de Reservas en C++

Este programa en C++ permite crear y gestionar reservas para un establecimiento. 
El programa solicita al usuario información sobre el cliente, el número de personas, la fecha y la hora de la reserva.
Luego, muestra un resumen de la reserva creada.

## Estructura del Código

El código se estructura de la siguiente manera:

1.  **Inclusión de Librerías:**
    *   `iostream`: Para la entrada y salida de datos.
    *   `string`: Para el manejo de cadenas de texto.

2.  **Estructura `Reserva`:**
    *   `nombreCliente`: Almacena el nombre del cliente (cadena de texto).
    *   `numeroPersonas`: Almacena el número de personas en la reserva (entero).
    *   `fecha`: Almacena la fecha de la reserva (cadena de texto).
    *   `hora`: Almacena la hora de la reserva (cadena de texto).

3.  **Función `main()`:**
    *   Se declara una variable `reserva` de tipo `Reserva`.
    *   Se solicita al usuario que ingrese los datos de la reserva: nombre del cliente,
    *    número de personas, fecha y hora.
    *   Se muestra un mensaje de confirmación de la reserva.
    *   Se muestran los detalles de la reserva creada.

## Compilación y Ejecución

Para compilar y ejecutar este programa, puedes utilizar un compilador de C++ como g++.

1.  **Guardar el código:** Guarda el código en un archivo llamado `reservas.cpp` (o cualquier otro nombre que desees).

2.  **Compilar:** Abre una terminal o línea de comandos y utiliza el siguiente comando para compilar el código:

    ```bash
    g++ reservas.cpp -o reservas
    ```

3.  **Ejecutar:** Ejecuta el programa con el siguiente comando:

    ```bash
    ./reservas
    ```

El programa te pedirá que ingreses los datos de la reserva. Sigue las instrucciones y presiona Enter después de cada dato.
