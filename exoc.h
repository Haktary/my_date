enum month{ Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; 
// on partira du postula que il y'a 360 jour par ans et que les mois ne dure que 30 jours 
//si ces trop facile pour vous faite la même chose avec le calendrier maya 
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
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


/* le but est de crée un exo my_date dans lequel on manipule une structure et des enume


*/

