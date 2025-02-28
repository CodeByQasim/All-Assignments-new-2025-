#include <stdio.h>
#include <conio.h>
void main(){
    int reading, writing;
    int Total_time_spend;


    printf("Time Spent Reading on Confession Posts (in minutes) ");
    scanf("%d", &reading);

    printf("Time Spent Writting on Confession Posts (in minutes) ");
    scanf("%d", &writing);

    Total_time_spend = reading + writing;
    
    if(Total_time_spend > 120)
      {
          printf("Oye! 2 ghantay se zyada confessions pe laga diye? Itna waqt barbaad! Socho agar ye waqt Parhayi par ya kisi skill pe lagatay to kidhr pohanch gaye hotay! Zindagi me Kuch bara karna h to ye confessions chorh or apne goals pe focus kar ");
    }
    else if(Total_time_spend >=60 && Total_time_spend <=120){
          printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho, thora socho kia yeh waqt tumhen agay leke ja raha h? zindagi me Aesi Chezon ka regret rakhna seekho warna regret hoga baad me");
    }
    else {
          printf("Wah bhai! Kamal karrahe ho! Sirf thori der mein confessions check kar liya, aur phir apne kaam par wapas laggaye. Isi tarah focus rakho, tum bahut agay jao ge. Parhai aur apne goals pe dhyan rakho Shabash");
    }
    getch();
}
