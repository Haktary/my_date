enum month{ Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; 
// on partira du postula que il y'a 360 jour par ans et que les mois ne dure que 30 jours s
enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
typedef struct myDate{
	int years;
	enum month theMonth;
	enum day theDay;
} myDate;


struct myDate * additionDate(struct myDate *firstdate, struct myDate *seconddate); // additionne deux date
struct myDate * soustractionDate(struct myDate *firstdate, struct myDate *seconddate); // soustraire 2 date
char * readFileDate(); // renvoie years, month, day, years, month, day
myDate * parserCsvDate(char * fileDate); // parse csv rencoie tab de myDate[2]
void datePrint(); // print myDate


/* 
	le but est de crée un exo my_date dans lequel on manipule struct, enum, et fichier. (utilisation de malloc et sizeof).  
	la fonction add adition 2 date 
	la fonction soustraction soustrait 2 date 
	la fonction readFileDate open un file csv pour récupérer les date (seulement 2)
	la fonction parserCsv renvoir un tab de myDate[2]
	la fonction datePrint() print les date sous le format years month day (fonction fournisable)



*/

