#include <stdio.h>

void getJudgeData(void);
void calcScore(void);

int scores[5];

int main(void)
{
  getJudgeData();
  calcScore();
  
  return 0;
}

void getJudgeData(void)
{
  printf("Judge A: ");
  scanf("%d", &scores[0]);
  printf("Judge B: ");
  scanf("%d", &scores[1]);
  printf("Judge C: ");
  scanf("%d", &scores[2]);
  printf("Judge D: ");
  scanf("%d", &scores[3]);
  printf("Judge E: ");
  scanf("%d", &scores[4]);
}

void calcScore(void)
{
  int min, max, sum = 0;

  // Find min, max
  min = scores[0];
  max = scores[0];
  for (int i = 0; i < 5; i++)
    {
      if (min > scores[i])
	min = scores[i];
      if (max < scores[i])
	max = scores[i];
      sum += scores[i];
    }

  printf("The final score is %.2lf\n", (double) (sum - min - max) / 3);
}