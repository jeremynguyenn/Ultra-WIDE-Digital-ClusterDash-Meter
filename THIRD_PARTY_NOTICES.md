# Third-Party Notices

This project relies on the following third-party software. Each component is subject to the terms and conditions of the respective vendor and is not covered by the MIT License.

---

## SEGGER emWin (GUI library)
- Provided by: SEGGER Microcontroller GmbH
- License Key:
- Source code is **prohibited for redistribution** (cannot be distributed to third parties without SEGGER's written consent).
- Obtain and use legitimately from an MCU vendor (e.g., Renesas).
- Repository Policy:
- emWin source code is not included.
- Generate code using the configured Smart Configurator and register "r_emwin_rx" in your project.
- The acquired code has been added to `.gitignore` and **does not commit**.

---
## Renesas FIT / Generated Code
- Provided by: Renesas Electronics Corporation
- License Key:
- No warranty license intended for use on Renesas products.
- Copyright notices/disclaimers must be retained.
- Repository Policy:
- Copyright notices and disclaimers accompanying FIT/generated code must be retained without modification.
- Add the version and source to the README as necessary.

---

## Disclaimer
- This project's MIT license applies only to original code.
- Restrictions and obligations arising from the use of third-party software must be governed by the respective vendor's license.

Also, the previously included SEGGER emWin-related files have been completely removed from the repository due to their license prohibiting redistribution.

The current history and latest sources do not contain any emWin-related code.

If using external libraries, please comply with the license terms of each library.