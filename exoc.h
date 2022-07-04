enum month{ Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9 , Oct = 10, Nov = 11, Dec = 12 }; 
// on partira du postula que il y'a 360 jour par ans et que les mois ne dure que 30 jours s
enum day {monday = 1, tuesday = 2 , wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7};
typedef struct myDate{
	int years;
	int nbday;
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

