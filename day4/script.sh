#!/bin/bash

declare -i numFilas=0;
declare -i numCaracteres=0;

numFilas=`grep -vc '^$' datos.txt`

##grep -vc '^$' datos.txt
##grep -o -i : datos.txt | wc -l

numFilas=$numFilas;


declare texto;

texto=$(cat datos.txt)

echo "$numFilas"

##echo "${texto}"

while IFS= read -r line
do
  echo "$line"
  numCaracteres=$(echo $line | wc -m)
  
  line=$(echo ${line//:/':"'})
  line=$(echo ${line//' '/'", '})
  
  
  declare var1=1;
  if test $numCaracteres -gt $var1;
  	then
  		echo $line'",' >> objetoDatos.js
  	else
  		echo $line'},
{' >> objetoDatos.js
  fi;
  
  
  
  echo $numCaracteres

done < datos.txt


sed -i '1i var datos = [{' objetoDatos.js
echo "}];" >> objetoDatos.js









#if test $numCaracteres < 2; then
  	##sed -i '{' fichero.txt
  	##echo $line >> fichero.txt
#fi





##  for (( i=0; i<$numCaracteres; i++ ))
##  do
##  	
##  	caracter=$(echo ${line:$i:1})
##  	if test "$caracter" = ":" ;then
##  	##echo "pasa"
##        	contadorPuntos=$contadorPuntos+1;
##	fi
##	##echo $caracter;
##  done




##count_it() {
##       echo "Variablie contains $2: ==>$1<=="
##       echo -n 'grep:'; echo -n "$1" | grep -c '^'
##       echo -n 'wc  :'; echo -n "$1" | wc -l
##       echo
##}

##VAR=''
##count_it "$VAR" "empty variable"

##VAR='one line'
##count_it "$VAR" "one line without \n at the end"

##VAR='line1
##'
##count_it "$VAR" "one line with \n at the end"

##VAR='line1
##line2'
##count_it "$VAR" "two lines without \n at the end"

##VAR='line1
##line2
##'
##count_it "$VAR" "two lines with \n at the end"

##count_it "$texto" "two lines with \n at the end"

##texto="Esto es un pequeño tutorial de Linux en el que hablo de Bash."
##tmp="${texto%%Linux*}"
##echo ${#tmp}
##echo ${texto:3:1}


##declare aux="";
##echo "$texto"

##texto=$(echo ${texto//:/':"'})

##texto=$(echo ${texto//' '/'", '})

##echo "$texto"

