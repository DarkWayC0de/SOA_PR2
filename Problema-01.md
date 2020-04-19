# Escenario
En una oficina de Correos existen 3 ventanillas de atención al cliente.
Cuando un cliente entra en la oficina para realizar alguna gestión se sienta en una silla y guarda una única cola hasta que alguna ventanilla queda libre.
En la oficina hay 15 sillas y si un cliente llega y ve que no quedan sillas libres se marcha.
Los trabajadores atienden en su ventanilla a los clientes en el orden de la cola.
Cuando un trabajador no tiene más clientes para atender se va al _office_ a descansar hasta que lleguen nuevos clientes.

# Actividad

1. Implementar el escenario anterior sin condiciones de carrera en C++ estándar o Qt usando hilos y los mecanismos de sincronización o soluciones lock-free que hemos visto.
2. Mostrar los eventos: "entra cliente XX", "se atiende al cliente XX", "el trabajador XX va al _office_", etc.
Esta información se puede mostrar en consola o en una GUI.
3. Usar tiempos aleatorios para simular las actividades: "periodo entre cliente y cliente" y "tiempo de atención de cada cliente".