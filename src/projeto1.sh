#!/bin/basH

variavel_1=$1
variavel_2=$2

find "$variavel1" -type f -exec sha1sum '{}' ';' > texto.txt 

sort -k 2 -o texto.txt texto.txt

resultado=$(./comparador1 texto.txt variavel_2)

if[-z "$resultado"];{
echo "OK" 
}else{
echo "$resultado"
}
fi

