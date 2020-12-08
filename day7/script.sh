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
  
  
  line=$(echo ${line//', '/'", "'})
  line=$(echo ${line//' contain '/'", "'})
  line=$(echo ${line//'.'/'"],'})
  line=$(echo ${line//'bags'/''})
  line=$(echo ${line//'bag'/''})

  line=$(echo ${line//'1 '/'1", "'})
  line=$(echo ${line//'2 '/'2", "'})
  line=$(echo ${line//'3 '/'3", "'})
  line=$(echo ${line//'4 '/'4", "'})
  line=$(echo ${line//'5 '/'5", "'})
  line=$(echo ${line//'6 '/'6", "'})
  line=$(echo ${line//'7 '/'7", "'})
  line=$(echo ${line//'8 '/'8", "'})
  line=$(echo ${line//'9 '/'9", "'})

  
  line=$(echo ${line//' "'/'"'})
  line=$(echo ${line//' "'/'"'})
  
  
  
  
  echo '["'$line >> datos.js
  
  
  
  echo $numCaracteres

done < datos.txt


sed -i '1i var datos = [' datos.js
echo "];" >> datos.js






##https://www.ochobitshacenunbyte.com/2019/05/21/como-leer-un-archivo-linea-a-linea-en-bash/
##https://linuxcenter.es/component/k2/item/144-consejos-para-manejar-texto-directamente-en-bash
##https://poesiabinaria.net/2015/10/9-trucos-para-manejar-cadenas-de-caracteres-en-bash-y-no-morir-en-el-intento/
##https://www.cyberciti.biz/faq/bash-for-loop/
##https://codingornot.com/08-bash-ciclos-for
##https://e-mc2.net/es/bash-iii-variables-y-funciones


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

