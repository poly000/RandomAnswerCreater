#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void) {
  register int q,o;
  {
    int question_amount;
    int option_amount;
    scanf("%d%d",&option_amount,&question_amount);
    srand(time(0));
    q = question_amount;
    o = option_amount;
  }
  for (register int i=1; i<=q; i++) {
    printf("%d.: %c\n",i,'A'+rand()%o);
  }
  getchar(),getchar();
  return 0;
}
