¿Cuál de los siguientes algoritmos de planificación de la CPU asigna un tiempo fijo, conocido como quantum a cada proceso en la cola de ejecución, y se basa en la rotación de procesos para asegurar que todos tengan la oportunidad de utilizar la CPU?
- **a. Planificación por tiempo compartido (Round Robin) \***
- b. Planificación por menor tiempo restante
- c. Planificación por prioridades
- d. Primero en entrar, primero en salir (FIFO)

En el proceso de compilación de un programa en C o C++, ¿cuál es el orden correcto de las fases desde el archivo fuente hasta el archivo ejecutable?
- **a. Preprocesamiento, Compilación, Ensamblado, Enlace \***
- b. Compilación, Preprocesamiento, Ensamblado, Enlace
- c. Preprocesamiento, Ensamblado, Compilación, Enlace
- d. Ensamblado, Preprocesamiento, Compilación, Enlace

Un proceso se encuentra en estado "bloqueado" debido a una operación de entrada/salida que se está llevando a cabo en el sistema. ¿Qué proceso puede cambiar el estado del proceso "bloqueado" a estado "listo"?
- a. Un proceso en estado "listo" que se encuentra en la cola de procesos listos
- b. El proceso que se está ejecutando actualmente en la CPU
- **c. El sistema operativo a través del controlador de entrada/salida \***
- d. El proceso ocioso

Un procesador tiene una memoria caché L1 de 32KB con un tamaño de bloque de 64 bytes. La memoria principal tiene una latencia de 10 nanosegundos, mientras que la caché L1 tiene una latencia de 1 nanosegundo. ¿Cuál es la tasa de acierto de la caché L1 si se accede a la memoria principal una vez por cada instrucciones ejecutadas?
- **a. 99% \***
- b. 98%
- c. 97%
- d. 96%

En el diseño de sistemas operativos, ¿qué técnica de administración de memoria permite cargar partes de un programa en la memoria solo cuando se necesitan, en lugar de cargar todo el programa al inicio?
- a. Paginación 
- b. Segmentación 
- **c. Memoria virtual \***
- d. Carga dinámica

¿Cuál de las siguientes áreas de memoria almacena las variables locales de una función?
- a. Memoria estática
- **b. Pila (Stack) \***
- c. Montón (Heap)
- d. Memoria de código

¿Cuál de las siguientes afirmaciones es verdadera sobre la jerarquía de memoria y su impacto en las arquitecturas de propósito general tipo Von Neummann?
- a. Los sistemas de memoria caché no influyen en el rendimiento de una arquitectura Von Neummann
- b. La jerarquía de memoria se compone exclusivamente de memoria principal y caché de nivel 1 
- c. La localidad temporal y espacial no son importantes en el diseño de la jerarquía de memoria 
- **d. La jerarquía de memoria en una arquitectura Von Neumann se basa en la velocidad, tamaño y costo de diferentes tipos de memoria \***

¿Cómo afecta el aumento del tamaño de la caché a la estimación del tiempo medio de acceso en un sistema con jerarquía de memoria?
- a. Aumenta el tiempo de acceso a la memoria RAM
- **b. Disminuye el tiempo medio de acceso a la memoria \***
- c. Aumenta el tamaño del área de intercambio
- d. No tiene efecto en el tiempo de acceso a la memoria

Según el texto 'The End of Moores' Law: A New beginning for Information Technology' de Thomas N. Theis, ¿cuál es la principal razón detrás del fin de la Ley de Moore?
- a. La falta de innovación en la industria de semiconductores
- b. El agotamiento de los recurso naturales utilizados en la fabricación de microprocesadores
- **c. Los límites y económicos de la miniaturización de los transistores \***
- d. La aperición de nuevas tecnologías que hacen obsoletos los microprocesadores

Luego de ejecutar una aplicación en una máquina con un procesador que cuenta con una memoria caché L1 de 128 KB y un tamaño de bloque de 256 bytes, se descubrió que la tasa de acierto de la caché L1 es del 92%. Si se observó que acceder a la memoria principal toma el tiempo equivalente a 150 instrucciones, ¿cuántas instrucciones se llevaron a cabo en total?

- a. 1625 instrucciones 
- **b. 1875 instrucciones \***
- c. 2000 instrucciones
- d. 1750 instrucciones

Dado el siguiente fragmento de código en C, si todos los elementos del array numbers son inicialmente 0, ¿cuántos elementos serán diferentes de 0 después de la ejecución?

```c 
int numbers[10] = {0};
int *ptr = numbers;ññ
for (int i = 0; i < 5; i++) { *ptr = i; ptr++; }
```

- **a. 4 \*** 
- b. 5 
- c. 10 
- d. 0

En arquitecturas de computadores modernas, ¿qué mecanismo se utiliza para anticipar las ramificaciones de un programa y mejorar el flujo de instrucciones?

- a. Pipeline de instrucciones 
- **b. Predicción de saltos \***
- c. Prefetching de instrucciones
- d. Política de reemplazo de caché

¿Cuál de las siguientes acciones puede ayudar a abordar el problema de coherencia en sistemas jerarquizados de memoria?

- **a. Implementar un protocolo de coherencia de caché que garantice la consistencia de los datos duplicados en diferentes niveles de memoria \***
- b. Asegurar que las direcciones de memoria en los diferentes niveles de memoria sea idénticas
- c. Utilizar direcciones de memoria físicas en lugar de direcciones de memoria virtuales
- d. Evitar la duplicación de los valores de las variables en los diferentes niveles de memoria

Un procesador tiene una memoria caché L1 de 32 Kb con un tamaño de bloque de 64 bytes. La memoria principal tiene una latencia de 10 nanosegundos, mientras que la caché L1 tiene una latencia de 1 nanosegundo. ¿Cuál es la tasa de acierto de la caché L1 si se accede a la memoria principal una vez por cada 100 instrucciones ejecutadas?

- a. 98%
- b. 96%
- **c. 99% \***
- d. 97%

¿Cuál de los siguientes componentes No es parte de la arquitectura de Von neumann?

- a. Unidad aritmético-lógica (ALU)
- b. Unidad de entrada/salida
- c. Unidad de control 
- **d. Unidad de memoria caché \*** 

¿Cuál de las siguientes afirmaciones es cierta sobre la proximidad temporal y espacial en la jerarquía de memoria?

- a. La proximidad temporal se refiere a la tendencia de los datos a ser utilizados juntos en el tiempo
- b. La proximidad espacial se refiere a la tendencia de los datos a ser utilizados juntos en el tiempo
- **c. La proximidad temporal se refiere a la tendencia de los datos a ser utilizados varias veces en un corto periodo de tiempo \***
- d. La proximidad espacial se refiere a la tendencias de los datos a ser utilizados varias veces en un corto periodo de tiempo

En el contexto de la gestión de procesos, un sistema operativo realiza todas las siguientes funciones, excepto:

- a. Permitir la comunicación entre procesos mediante mecanismos de sincronización 
- b. Administrar la asignación de recursos a los procesos 
- **c. Optimizar el rendimiento de cada proceso individual \*** 
- d. Crear, suspender y reanudar procesos

¿Cuál es una limitación de la arquitectura de Von Neumann que afecta su rendimiento?

- a. La ausencia de una unidad aritmético-lógica (ALU) en la arquitectura
- b. La incapacidad de almacenar programas y datos en la misma memoria 
- **c. El cuello de botella debido a la lectura y escritura en la misma memoria \***
- d. La falta de soporte para la entrada y salida de datos 

¿Cuál es el principal objetivo de la jerarquía de memoria en las arquitecturas de propósito general tipo Von Neumann?

- a. Aumentar la capacidad total de almacenamiento de la memoria
- **b. Reducir la latencia de acceso a los datos \***
- c. Mejorar la fiabilidad del sistema operativo 
- d. Optimizar el rendimiento del procesador

¿Cuál secuencia de acciones es llavada a cabo ante la preencia de una interrupción? 

- a. Se termina el programa en ejecución, se inicial el DMA y se continua con el procesamiento 
- b. Se suspende el programa en ejecución, se ejecuta la rutina asociada a la interrupción y se asigna nuevo proceso al procesador
- **c. Se detiene el programa en ejecución, se ejecuta rutina asociada a la interrupción y se reinicia el programa detenido**
- d. Se bloquea el programa en ejecución, se llama a sistema operativo, se continúa con una operación periférica simultánea

El estudio mostró que estadísticamente la relación entre la cantidad de memoria usada al ejecutar una solución computacional y el consumo energético es: 

- a. Existente y fuertemente correlacionada
- **b. No existente** 
- c. No se estudió esta relación 
- d. No hay conclusión al respecto

Si un proceso a un nivel de usuario, en un sistema con jerarquización de memoria, desea modificar sus propias entradas en la tabla de páginas:

- a. Las puede modificar para favorecer el proceso de traducción 
- b. Las puede modificar para evitar la paginación 
- **c. No las puede modificar por seguridad en la ejecución** 
- d. No las puede modificar porque sería ineficiente

SJT (Shortest Job First) es el planificador no-expropiativo más eficiente que puede ser implementado en un sistema operativo

- a. Verdadero
- **b. Falso**

¿Cuál de las siguientes transiciones entre los estados de un proceso no se puede producir en un sistema con un algoritmo ed planificación no expulsivo?

- a. Bloqueado a listo 
- b. Ejecutando a listo 
- c. Ejecutando a bloqueado 
- d. **Listo a ejecutado**

Un objetivo que motivo el desarrollo de la arquitectura RISC fue (responda de acuerdo a la lectura 02 del curso):

- a. Aumentar la velocidad de procesamiento 
- **b. Disminuir la complejidad de los programas**
- c. Disminuir la carga de los procesadores microprogramados
- d. Solo azar

Con el auge del Internet de las Cosas (IoT), ¿qué características específicas deben tener los sistemas operativos para dispositivos IoT y cómo difieren estos de los sistemas operativos tradicionales? Analice los compromisos entre eficiente energética, seguridad y funcionalidad.

- R/ Los sistemas operativos para IoT deben ser ligeros, eficientes energéticamente y optimizados para dispositivos con restricciones de hardware. Estos sistemas se diferencian de los tradicionales en que priorizan la eficiencia sobre la funcionalidad extensa, requieren menos recursos de procesamiento y memoria, y suelen tener interfaces más simples. Un ejemplo de esto es que no necesitas el mismo procesamiento de un computador moderno para tareas complejas, en un sensor que solo se limita a una tarea.

¿Cuál de las siguientes aspectos se considera más importante para determinar el rendimiento de la CPU? (responda de acuerdo a la lectura 02 del curso)

- **a. Las tecnologías de proceso - materiales y técnicas utilizadas en la fabricación \***
- b. La arquitectura - el diseño al interior del procesador 
- c. El encapsulado - la forma como el procesador se integra el resto del sistema 
- d. El tipo de operaciones - de control, de flujo, de transferencia

Tras ejecutar un programa en una computador con un procesador equipado con una memoria caché L1 de 64 KB y un tamaño de bloque de 128 bytes, se determinó que la tasa de acierto de la caché L1 es del 94%. Dado que se identificó que el tiempo de acceso a la memoria principal equivale a 120 instrucciones. ¿cuántas instrucciones se ejecutaron en total? 

- a. 1900 instrucciones 
- **b. 2000 instrucciones \*** 
- c. 2100 instrucciones 
- d. 2200 instrucciones

Cuando un proceso está "bloqueado" por una solicitud de entrada/salida, ¿qué evento principalmente lo cambia a "listo" una vez que la operación de entrada/salida ha concluido?

- **a. Una interrupción del controlador de entrada/salida gestionada por el sistema operativo \***
- b. Una interrupción del propio proceso solicitando más tiempos de CPU
- c. Una solicitud del proceso ocioso para reasignar recursos 
- d. Una señal de otro proceso "listo" liberando recursos

¿Cuál es el principal objetivo de la jerarquía de memoria en las arquitecturas de propósito general tipo Von Neumann?

- a. Aumentar la capacidad total de almacenamiento de la memoria 
- **b. Reducir la latencia de acceso a los datos \***
- c. Mejorar la fiabilidad del sistema operativo 
- d. Optimizar el rendimiento del procesador 

Dentro de las tres áreas principales, consideradas en el diseño del procesador está la Tecnología de Proceso. Esta es referida a: (responda de acuerdo la lectura 02 del curso): 

- a. Como se integra un procesador con lo que lo rodea
- **b. Materiales y técnicas utilizadas en la fabricación del circuito integrado \***
- c. La forma como se crean nuevos procesos 
- d. La arquitectura del procesador 

El hecho de que las memorias sean accesadas por palabras o bloques de memoria más grandes que la unidad de direccionamiento. Se fundamenta en:

- Diseños arquitectónicos
- Proximidad temporal
- **Proximidad espacial \*** 
- Proximidad referencial
