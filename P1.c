#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 10
#define M 10

int matrix[M][N];
void setZeros() {
	int row[M];
	int column[N];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				row[i] = 1;
				column[j] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if ((row[i] == 1 || column[j] == 1)) {
				matrix[i][j] = 0;
			}
		}
	}

}

void generateMatrix() {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 10;
			}
		}
	}

void printMatrix(int flag) {
	if (flag == 0) {
		printf("\n\n -------- BEFORE CHECKING ---------\n\n");
	}
	else {
		printf("\n\n -------- AFTER CHECKING ---------\n\n");
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf(" %i ", matrix[i][j]);
		}
		printf("\n");
	}
}


void main(){
	srand(time(NULL));
	generateMatrix();
	printMatrix(0);
	setZeros();
	printMatrix(1);
}