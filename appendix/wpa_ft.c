00152         /* Group Suite Selector */
00153         if (sm->group_cipher == WPA_CIPHER_CCMP)
00154                 RSN_SELECTOR_PUT(pos, RSN_CIPHER_SUITE_CCMP);
00155         else if (sm->group_cipher == WPA_CIPHER_TKIP)
00156                 RSN_SELECTOR_PUT(pos, RSN_CIPHER_SUITE_TKIP);
00157         else {
00158                 wpa_printf(MSG_WARNING, "FT: Invalid group cipher (%d)",
00159                            sm->group_cipher);
00160                 os_free(buf);
00161                 return NULL;
00162         }
