**[pt_BR](#PT-BR)**
**[en_US](#EN-US)**
## EN-US
# LIB CONFIGURED ORIGINALLY FOR WINDOWS!!!

## REQUIRED:
## - WINDOWS
- **Must have MSYS2 installed**
    \- [click here to download MSYS2](https://www.msys2.org)

## - LINUX 
1. **Needs GCC installed on your Linux:**
    - **Command to install:**
        ```
        sudo apt-get update
        sudo apt-get install gcc
        ```
    - **To get permission:**
        ```
        chmod +x test_program.exe
        ```

## TEST & INTEGRATION
## - LIB TEST
1. **To test the lib, navigate to the test folder:**
     ```
     bash
    $ cd test
    $ ./test_program

    #or
    #But for this case you need to have a csv file in the ./ of the lib.

    $ test/test_program

    ```
2. **To compile the lib if not already compiled:**
    ```
    bash
    $ make #compiles the lib 
    $ make test #compiles the test program 

    ```
## - LIB INTEGRATION 

1. **cloning the lib:**
    ```
    bash
    mkdir libs

    cd libs

    $ git clone git@github.com:weliton1996/csv_to_txt.git

    ```

2. **Example main file of the project consuming the lib:**
    ```
    #include "libs/csv_to_txt/include/csv_to_txt.h"
    #include <stdio.h>

    int main() {
        const char *input_filename = "./input.csv";
        const char *output_filename = "output.txt";

        // Call the library function to convert CSV to TXT
        csv_to_txt(input_filename, output_filename);

        printf("Conversion completed successfully!\n");

        return 0; 
    }
    ```

3. **Testing integration of the lib in your project:**
    ```
    $ gcc -o meu_programa main.c libs/csv_to_txt/src/csv_to_txt.c -Ilibs/csv_to_txt/include -Llibs/csv_to_txt/lib -lcsv_to_txt

    $ ./meu_programa
    ```

____


## PT-BR
# LIB CONFIGURADA ORIGINAMENTE PARA WINDOWS!!!

## NESCESSÁRIO: 
## - WINDOWS
- **Ter instalado  MSYS2**
    \- [click aqui para baixar o MSYS2](https://www.msys2.org)

## - LINUX 
1. **Precisa ter GCC no seu linux:**
    - **Comando para instalar:**
        ```
        sudo apt-get update
        sudo apt-get install gcc
        ```
    - **Para obter permissão:**
        ```
        chmod +x test_program.exe
        ```
        
## TEST & INTEGRAÇÃO
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

