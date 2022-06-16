#!/bin/bash

#/////////////////////////////////////////////////////////////////////////////////
#  Identificación del alumno
#
#  Nombre Completo: Ana Poulette Nicole Muñoz Fuentes
#/////////////////////////////////////////////////////////////////////////////////

#/////////////////////////////////////////////////////////////////////////////////
#//   Usage:
#//           ./run_experiments --matrix <ruta_al_archivo_de_datos> --repeticiones <nro>
#//
#//   Description:
#//           -->script que ejecuta de manera automática el programa con la implementación
#//		de los métodos de multiplicación 30 veces y va guardando los resultados
#//		en el archivo resultados.txt
#//
#/////////////////////////////////////////////////////////////////////////////////


ruta=$2;
reps=$4;


for ((i=0;i<=$reps;i++)) do
	##./matrixMult --matrix $PATH >> resultados.txt;
	./mult --A $ruta | tee -a resultados.txt;
done
