// Copyright 2015 Samsung Electronics Co, Ltd. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "popup/popup_string.h"

#include <libintl.h>

namespace wrt {

namespace popup_string {

const char kTextDomainWrt[] = "wrt";

const char kPopupTitleAuthRequest[] = "IDS_SA_BODY_USER_AUTHENTICATION";
const char kPopupTitleCert[] = "IDS_BR_HEADER_CERTIFICATE_INFO";
const char kPopupTitleGeoLocation[] = "IDS_WRT_OPT_ACCESS_USER_LOCATION";
const char kPopupTitleUserMedia[] = "IDS_WRT_OPT_USE_USER_MEDIA";
const char kPopupTitleWebNotification[] =
  "IDS_BR_HEADER_WEB_NOTIFICATION";
const char kPopupTitleWebStorage[] = "IDS_WRT_OPT_USE_STORE_WEB_DATA";

const char kPopupBodyAuthRequest[] =
  "IDS_BR_BODY_DESTINATIONS_AUTHENTICATION_REQUIRED";
const char kPopupBodyCert[] =
  "IDS_BR_BODY_SECURITY_CERTIFICATE_PROBLEM_MSG";
const char kPopupBodyGeoLocation[] =
  "IDS_WRT_BODY_ALLOWS_THIS_SITE_TO_ACCESS_YOUR_LOCATION_INFORMATION";
const char kPopupBodyUserMedia[] =
  "IDS_WRT_BODY_ALLOWS_THIS_SITE_TO_USE_THE_MEDIA_FILES_STORED_ON_YOUR_DEVICE";
const char kPopupBodyWebNotification[] =
  "IDS_WRT_BODY_ALLOWS_THIS_SITE_TO_DISPLAY_NOTIFICATIONS";
const char kPopupBodyWebStorage[] =
  "IDS_WRT_BODY_ALLOWS_THIS_SITE_TO_SAVE_A_LARGE_AMOUNT_OF_DATA_ON_YOUR_DEVICE";

const char kPopupCheckRememberPreference[] =
  "IDS_BR_BODY_REMEMBER_PREFERENCE";

const char kPopupLabelAuthusername[] = "IDS_BR_BODY_AUTHUSERNAME";
const char kPopupLabelPassword[] =  "IDS_BR_BODY_AUTHPASSWORD";

const char kPopupButtonOk[] = "IDS_BR_SK_OK";
const char kPopupButtonLogin[] = "IDS_BR_BODY_LOGIN";
const char kPopupButtonCancel[] = "IDS_BR_SK_CANCEL";
const char kPopupButtonAllow[] = "IDS_BR_OPT_ALLOW";
const char kPopupButtonDeny[] = "IDS_COM_BODY_DENY";

std::string GetText(const std::string& msg_id) {
  return dgettext(kTextDomainWrt, msg_id.c_str());
}

}  // namespace popup_string

}  // namespace wrt