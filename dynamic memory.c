#include <stdio.h>
#include <stdlib.h>
void memory_hog(int size)

int main()
{

    /*
    //MALLOC
    int *a=malloc(sizeof(int)*10);//-dynamically allocated array,allocating space for 10 integers

    for(int i=0;i<10;i++) a[i]=10-i;//accessing the block of memory as an array i se dostupvat vsichki elementi ot masiva

    for(int i=0;i<10;i++)
        printf("a[%d]=%d\n",i,a[i]);//-dostpvame bloka, kojto sme zadeili ot heepa i go razglejdame kato masiv(dinamically allocated array)
    printf("\n");
    printf("a: %p",a);//memory adresa na bloka ot pamet vzet ot heepa zapazen v tozi pointer v stacka
    //!kogato dostupvame dinamichna pamet posle trqbva da izchistim (free) sled kto sme prikluchili da q izpolzvame!
    free(a);//pozvolqva adresa kojto e posochen ot ukazateq da bude izpolzvan pak
    //pri heepa nie ruchno trqbva da si osbojdavame pametta, dokato v stack-a se sluchva avtomatichno sled kato funkciq e izvela rezultat lokalnite promenlivi se mahat ot stacka
    //podobrqva prestavqneto na programata, no ima risk ot memory leak, toest pamet koqto ne sme osvobodili nqmame ukazatel kum neq i ne mojem da q dostypim
    */

    //!CALLOC
    //razlikata s malloc e che calloc zadelq pamet i avtomatichno zanulqva vsichki bitove(inicializira gi do 0)
    int *a=calloc(10,sizeof(int));//zadelq pamet ot heepa za 10 integera
    for(int i=0;i<10;i++) a[i]=10-i;
    for(int i=0;i<10;i++)
    {
      printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");
    printf("a: %p",a);
    int *save=a;//save zapazva sushtiq memory adres kojto zapazvashe pointera a=> zapazva se sushtiq dynamically allocated array v drug pointer,
    free(a);
    //no vijdame che sled free(a) ne se iztriva pametta, a realno se zapavat sushtie chisla v nizhodqsh red na masiva
    //, no osvobojdava bloka, za da moje da bude dostupen/zadelen pak-> ne trie dannite ot tozi blok ot dinamichnata pamet, no go osvobozhdava za da byde dostupen pak
    //-> sledovatelno zatova izpolzvame calloc, zashtoot otnovo ako dostupim bloka ot (a) shte go setne na nuli
    //! ako imame primerno suhraena parola v dinamichnata pamet i q freenem tq ne se iztriva ot pametta koeto moje da bude security risk
    printf("save: %p",save);
    for(int i=0;i<10;i++)
    {
      printf("a[%d]=%d\n",i,save[i]);
    }
    printf("\n");

    //!MEMORY LEAK
    /*while(1)
    {
        memory_hog(128000);
    }
    ///!!!funkciqta se izvikva i zadelq mnogo pmet, koqto nqma kak da se osvobodi, dokato ne se prepulni heepa i e crashne////!!!!
    */

    //!REALLOC-REALLOCATE SPACE(for a larger block of memory)
    //mojem da izpolzvame druga funkciq- poneje pametta koqto sme zadelili ot heepa ne e fiksirana
    int size=0;
    printf("Enter size:");
    scanf("%d",&size);

    int *b=calloc(size,sizeof(int));
    for(int i=0;i<size;i++) a[i]=10-i;

    for(int i=0;i<size;i++)
    {
      printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");

    printf("a: %p",a);

    //2-shte zadelim poveche pamet
    a=realloc(a,sizeof(int)*(size+5));//vrushta ukazatel kum noviq(po-golqm)blok zadelena pamet
    //kazvam bloka ot pamet kojto bqhme zadelili ot heepa, sochen ot ukazatelq a, iskam da zadelq poveche pamet
    //i v sluchaq vrushta ukazatel kum noviq blok pamet, kato toj shte suhranqva sushtite stojnosti,
    //no shte ima mqsto da se suhranqvat oshte elemnti
    for(int i=0;i<(size<5);i++) a[i]=9;

    for(int i=0;i<(size<5);i++)
    {
      printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");

    printf("a: %p",a);
    free(a);

    return 0;


}
void memory_hog(int size)
{
    int *a=malloc(size);
}
