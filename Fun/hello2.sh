

ARRAY=(Hello Trevor! Have fun programming today!)
ARRAY2=(Here is your prompt!)

echo ""

for VAR in {0..5}
do
    for (( i=0; i<${#ARRAY[VAR]}; i++ )); do
	printf "${ARRAY[VAR]:$i:1}"
	sleep .025
    done 
    printf " "
done

echo ""

for VAR in {0..3}
do
    for (( i=0; i<${#ARRAY2[VAR]}; i++ )); do
        printf "${ARRAY2[VAR]:$i:1}"
        sleep .025
    done
    printf " "
done

echo ""