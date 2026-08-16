# RainTweak (fork)

Fork of [raincord/RainTweak](https://codeberg.org/raincord/RainTweak) — inject **Rain** into Discord on iOS.

## Build IPA / deb (GitHub Actions)

1. Open **Actions** → **Deploy Build** → **Run workflow**
2. Paste a **direct download URL** to a decrypted Discord IPA (`ipa_url`)
3. Set `release` / `is_testflight` as needed
4. Download artifacts: rootless `.deb` + injected `.ipa`
5. Install the IPA with **Ksign** / TrollStore / SideStore

> The IPA URL must be a **direct** file link (`curl -L -o discord.ipa URL` must download a real IPA, not an HTML page).

## Local build

See upstream `build-local.sh` and [Codeberg RainTweak](https://codeberg.org/raincord/RainTweak).

## Upstream

- Client: https://github.com/ra1ncord/rain  
- Tweak: https://codeberg.org/raincord/RainTweak  
