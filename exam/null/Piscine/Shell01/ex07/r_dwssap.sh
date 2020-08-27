cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d":" -f 1 | rev | sort -r | sed -n $FT_LINE1','$FT_LINE2'p;'$(($FT_LINE2+1))'q' | tr '\n' ',' | sed '$ s/.$/./' | sed 's/,/, /g' | tr -d '\n' 
