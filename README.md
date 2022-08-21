# Conversione métricas
En este espacio de github se encuentran alojadas las bibliotecas estatica y dinamica. Las bibliotecas creadas sirven para hacer conversiones metricas y son las siguientes:

 1. centímetros a kilómetros.
 2. kilómetros a centímetros.
 3. centímetros a milímetros.
 4. milímetros a centímetros.
 5. metros a centímetros.
 6. centímetros a metros.
 7. decámetros a metros.
 8. metros a decámetros.
 9. metros a hectómetros.
10. hectómetros a metros.
11. micrómetro a metro.
13. metros a micrómetros.

Instrucciones para compilar las biblioteca estatica y dinamica:
Generar el DLL
gcc -shared .\comp_o\bibodin\*.o -o conver.dll 
compilar estatica en .cc
g++ -o conversionesdin.exe conversionesdin.cc -L./lib/dinamica -lconver 
crear .exe de dinamica 
g++ conversionesdin.cc .\lib\dinamica\conver.dll -o conversionesdin
Compilar ejecutable
.\conversionesdin.exe







