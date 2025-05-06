#include "minunit/minunit.h"
#include "../src/preco.h"


//MU_TEST(test_check) {
//	mu_check(5 == 7);
//}
//Teste de Particionamento de Equivalencia
MU_TEST(test_equivalencia_1) {
    int resultado = calculapreco(30, 5);
    mu_assert_int_eq(150, resultado);
}
MU_TEST(test_equivalencia_2) {
    int resultado = calculapreco(10, 3);
    mu_assert_int_eq(30, resultado);
}
MU_TEST(test_equivalencia_3) {
    int resultado = calculapreco(60, 2);
    mu_assert_int_eq(30, resultado);
}
MU_TEST(test_equivalencia_4) {
    int resultado = calculapreco(-2, 5);
    mu_assert_int_eq(-1, resultado);
}
MU_TEST(test_equivalencia_5) {
    int resultado = calculapreco(200, 3);
    mu_assert_int_eq(-1, resultado);
}
MU_TEST(test_equivalencia_6) {
    int resultado = calculapreco(54, 7);
    mu_assert_int_eq(-2, resultado);
}
MU_TEST(test_equivalencia_7) {
    int resultado = calculapreco(27, 101);
    mu_assert_int_eq(-2, resultado);
}
MU_TEST(test_equivalencia_8) {
    int resultado = calculapreco(180, 0);
    mu_assert_int_eq(-2, resultado);
}
//Teste de Analise de valores Limite
MU_TEST(test_limite_C1) {
    int resultado = calculapreco(0, 1);
    mu_assert_int_eq(10, resultado);
}
MU_TEST(test_limite_C2) {
    int resultado = calculapreco(150, 5);
    mu_assert_int_eq(75, resultado);
}
MU_TEST(test_limite_C3) {
    int resultado = calculapreco(-1, 1);
    mu_assert_int_eq(-1, resultado);
}
MU_TEST(test_limite_C4) {
    int resultado = calculapreco(150, 6);
    mu_assert_int_eq(-2, resultado);
}
MU_TEST(test_limite_C5) {
    int resultado = calculapreco(151, 5);
    mu_assert_int_eq(-1, resultado);
}
MU_TEST(test_limite_C6) {
    int resultado = calculapreco(0, 0);
    mu_assert_int_eq(-2, resultado);
}

MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_check);
    MU_RUN_TEST(test_equivalencia_1);
    MU_RUN_TEST(test_equivalencia_2);
    MU_RUN_TEST(test_equivalencia_3);
    MU_RUN_TEST(test_equivalencia_4);
    MU_RUN_TEST(test_equivalencia_5);
    MU_RUN_TEST(test_equivalencia_6);
    MU_RUN_TEST(test_equivalencia_7);
    MU_RUN_TEST(test_equivalencia_8);
    MU_RUN_TEST(test_limite_C1);
    MU_RUN_TEST(test_limite_C2);
    MU_RUN_TEST(test_limite_C3);
    MU_RUN_TEST(test_limite_C4);
    MU_RUN_TEST(test_limite_C5);
    MU_RUN_TEST(test_limite_C6);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}