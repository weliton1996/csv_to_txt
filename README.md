## - LIB TEST
1. **Para testar a lib, navegue até a pasta test:**
     ```
     bash
    $ cd test
    $ ./test_program

    #ou
    #Mas para esse caso você precisa ter um arquivo csv no ./ da lib.

    $ test/test_program

    ```
2. **Para compilar a lib caso não venha compilada:**
    ```
    bash
    $ make #compila a lib 
    $ make test #compila o programa de teste 

    ```
## - INTEGRAÇÃO DA LIB 

1. **clonando a lib:**
    ```
    bash
    mkdir libs

    cd libs

    $ git clone git@github.com:weliton1996/csv_to_txt.git

    ```

2. **Exemplo arquivo main do projeto de consumo da lib:**
    ```
    #include "libs/csv_to_txt/include/csv_to_txt.h"
    #include <stdio.h>

    int main() {
        const char *input_filename = "./input.csv";
        const char *output_filename = "output.txt";

        // Chame a função da biblioteca para converter o CSV para TXT
        csv_to_txt(input_filename, output_filename);

        printf("Conversão concluída com sucesso!\n");

        return 0; 
    }
    ```

3. **Teste de integração da lib no seu projeto:**
    ```
    $ gcc -o meu_programa main.c libs/csv_to_txt/src/csv_to_txt.c -Ilibs/csv_to_txt/include -Llibs/csv_to_txt/lib -lcsv_to_txt

    $ ./meu_programa
    ```