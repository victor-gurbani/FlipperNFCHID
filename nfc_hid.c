#include <furi.h>
#include <furi_hal.h>
#include <nfc/nfc.h>
#include <nfc/protocols/iso14443_3a/iso14443_3a.h>
#include <dolphin/dolphin.h>
#include "helpers/protocol_support/nfc_protocol_support.h"
#include "nfc_app_i.h"

void read_nfc_uid() {
    // Initialize NFC device
    Nfc* nfc = nfc_alloc();
    nfc->nfc_device = nfc_device_alloc();

    // Start the NFC device
    nfc_device_start(nfc->nfc_device);

    // Prepare to read UID
    Iso14443_3aData iso14443_3a_data;
    iso14443_3a_data.uid_len = 0;

    // Poll for an NFC tag
    if (nfc_device_poll_iso14443_3a(nfc->nfc_device, &iso14443_3a_data) == NfcErrorNone) {
        // Successfully read UID
        printf("NFC UID: ");
        for (size_t i = 0; i < iso14443_3a_data.uid_len; i++) {
            printf("%02X ", iso14443_3a_data.uid[i]);
        }
        printf("\n");
    } else {
        printf("Failed to read NFC UID\n");
    }

    // Free the NFC device
    nfc_device_stop(nfc->nfc_device);
    nfc_device_free(nfc->nfc_device);
    nfc_free(nfc);
}

int main() {
    if (!nfc_is_hal_ready()) {
        printf("NFC hardware not ready\n");
        return 1;
    }

    read_nfc_uid();
    return 0;
}