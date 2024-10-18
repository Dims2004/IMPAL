#include <stdio.h>
#include <string.h>

// Function to display the main USSD menu
void displayMenu()
{
    printf("\nMau Mobil Toyota Supra dr Jordan?\n");
    printf("Hub *500*117#\n");
    printf("1. Transfer Pulsa\n");
    printf("2. Minta Pulsa\n");
    printf("3. Auto TP\n");
    printf("4. Delete Auto TP\n");
    printf("5. List Auto TP\n");
    printf("6. Cek Kupon Undian TP\n");
    printf("7. Keluar\n");
    printf("\nPilih opsi Anda: ");
}

// Function to handle the Transfer Pulsa feature
void transferPulsa()
{
    char nomorTujuan[20];
    int jumlahPulsa;

    // Prompt user to input destination phone number
    printf("Silahkan masukkan nomor tujuan Transfer Pulsa : (contoh: 08xxxx atau 628xxxx)\n");
    scanf("%s", nomorTujuan);

    // Prompt user to input the amount of pulsa to transfer
    printf("Masukkan jumlah pulsa yang ingin ditransfer: ");
    scanf("%d", &jumlahPulsa);

    // Confirming the transfer process
    printf("\nTransfer pulsa sebesar %d ke nomor %s sedang diproses...\n", jumlahPulsa, nomorTujuan);

    // Simulate delay (for example purpose, we will just print a message)
    printf("Pulsa berhasil ditransfer!\n");
    printf("Anda telah mengirim %d pulsa ke nomor %s.\n", jumlahPulsa, nomorTujuan);
}

// Function to handle the Minta Pulsa (Request Pulsa) feature
void mintaPulsa()
{
    char nomorSumber[20];
    int jumlahPulsa;

    // Prompt user to input the phone number from which they are requesting pulsa
    printf("Silahkan masukkan nomor yang akan diminta pulsanya: (contoh: 08xxxx atau 628xxxx)\n");
    scanf("%s", nomorSumber);

    // Prompt user to input the amount of pulsa they are requesting
    printf("Masukkan jumlah pulsa yang ingin diminta: ");
    scanf("%d", &jumlahPulsa);

    // Confirming the request process
    printf("\nPermintaan pulsa sebesar %d dari nomor %s sedang diproses...\n", jumlahPulsa, nomorSumber);

    // Simulate delay (for example purpose, we will just print a message)
    printf("Permintaan pulsa berhasil dikirim!\n");
    printf("Anda telah meminta %d pulsa dari nomor %s.\n", jumlahPulsa, nomorSumber);
}

// Function to prompt for another option or to exit
int pilihOpsiLain()
{
    int opsi;
    printf("\nApakah Anda ingin kembali ke menu utama?\n");
    printf("1. Ya\n");
    printf("2. Tidak, Keluar\n");
    printf("Pilih opsi: ");
    scanf("%d", &opsi);
    return opsi;
}

int main()
{
    int choice;
    int opsiLain;

    do
    {
        // Display the USSD menu
        displayMenu();
        scanf("%d", &choice);

        // Handle user's choice
        switch (choice)
        {
        case 1:
            transferPulsa();
            break;
        case 2:
            mintaPulsa();
            break;
        case 3:
            printf("Anda memilih: Auto TP\n");
            break;
        case 4:
            printf("Anda memilih: Delete Auto TP\n");
            break;
        case 5:
            printf("Anda memilih: List Auto TP\n");
            break;
        case 6:
            printf("Anda memilih: Cek Kupon Undian TP\n");
            break;
        case 7:
            printf("Terima kasih, keluar dari menu.\n");
            return 0; // Exit the program
        default:
            printf("Pilihan tidak valid\n");
            break;
        }

        // Ask if user wants to go back to the main menu or exit
        opsiLain = pilihOpsiLain();

    } while (opsiLain == 1);

    printf("Terima kasih, keluar dari menu.\n");

    return 0;
}
