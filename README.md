# RainTweak (fork)

Fork de [ra1ncord/RainTweak](https://github.com/ra1ncord/RainTweak) — injecte **Rain** dans Discord iOS.

## ⚠️ Crash au lancement (cause fréquente)

Si Discord **quitte direct** après install de l’IPA injectée :

1. **Sources incomplètes** — ce fork avait parfois seulement `Logger.m` (stub). Un `.deb` / IPA built sans `Tweak.xm`, `Utils.m`, etc. **casse Discord**.
   - Lance **Actions → Sync from upstream RainTweak → Run workflow**
   - Puis **Deploy Build** avec une vraie URL d’IPA Discord **décryptée**
2. **Mauvaise IPA Discord** — doit être une IPA **décryptée** (pas App Store chiffrée). Lien **direct** (`curl -L -o x.ipa URL` = fichier zip/ipa, pas HTML).
3. **Version Discord** — trop récente / trop ancienne vs le tweak. Utilise une version proche de celles testées par upstream (voir leurs releases).
4. **Double injection** — n’installe pas Unbound **et** Rain en même temps sur la même IPA.
5. **Signature** — TrollStore / Ksign : réinstalle propre (supprime l’app, réinstalle).

## Build IPA

1. **Actions → Sync from upstream** (une fois, pour récupérer tout le code)
2. **Actions → Deploy Build → Run workflow**
   - `ipa_url` = lien **direct** vers IPA Discord décryptée
   - `release` / `is_testflight` selon besoin
3. Télécharge l’artifact **ipa**
4. Installe avec Ksign / TrollStore / SideStore

## Upstream

- Tweak : https://github.com/ra1ncord/RainTweak  
- Client Rain : https://github.com/ra1ncord/rain  
