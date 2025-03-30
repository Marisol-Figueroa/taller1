## Ejercicio 2 - Repaso de punteros

2-a) Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo?
¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

El archivo .gitignore es importante incluirlo porque evita subir archivos innecesarios como temporales, compilados o de configuración local,protege información sensible como credenciales o configuraciones específicas del usuario.
Se debe agregar desde el inicio del proyecto, antes de hacer el primer commit, para evitar que archivos no deseados sean rastreados por Git. Sin embargo, si un proyecto ya está en marcha, se puede modificar en cualquier momento.

g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué? 

El resultado es el mismo porque .gitignore solo evita que Git agregue archivos ignorados a la zona commits y si un archivo ya fue agregado y confirmado antes de incluirlo en .gitignore, Git seguirá rastreándolo.  

