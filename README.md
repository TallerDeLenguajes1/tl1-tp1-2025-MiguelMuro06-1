 #.gitignore
1. ¿Por qué es conveniente? 
 Evita subir archivos basura, ejecutables pesados o configuraciones locales que no son parte del código.

2. ¿Cuándo se hace? Al inicio del proyecto.

3. ¿Cómo se configura? Se listan los nombres de archivos o patrones (usando asteriscos) que queremos que **Gitignore**.

sobre el codigo misterio:
.invertir_numero (antes f_alpha):Utiliza un ciclo while con el operador módulo % 10 para extraer el último dígito del número y lo va reconstruyendo al revés. Por ejemplo, si el valor es 452, lo transforma en 254.

.calcular_mitad (antes f_beta):Realiza una división entera del valor por 2 a través del puntero

.sumar_digitos_al_total (antes f_gamma):Primero descompone el número para sumar sus cifras individuales (ej: 1+2+7=10) y luego suma ese resultado al número original que estaba en la memoria.

ejecutar_procesamiento (antes procesar_enigma):Es la función encargada de llamar a las tres funciones anteriores en el orden correcto.

sobre el codigo sin funcionar: 1ro no estaba la biblioteca y por ende no andaban las funciones printf y scanf asi que tuve que ponerla y empezaron a leer. lo 2do es que varias lineas no tenian punto y coma, dandome error en las lineas que seguian. y el 3er y ultimo error es que no estaba el "&" en la variable1 y no se guarda el valor y el programa seguia pero no andaba

## Respuestas Ejercicio 4

**¿A qué se debe que los apartados 2 y 3 den el mismo resultado?**
Se debe a que el puntero almacena como valor la dirección de memoria de la variable a la que apunta. Por lo tanto, imprimir el valor del puntero (punto 2) y la dirección de la variable (punto 3) es mostrar la misma ubicación física en la memoria RAM.

**¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?**
En el punto 4 se obtiene la dirección de memoria del propio puntero. **No es igual** a los anteriores. Esto sucede porque el puntero es, en sí mismo, una variable que necesita su propio espacio en la memoria para guardar la dirección de otra variable. Por lo tanto, tiene su propia dirección de memoria única.