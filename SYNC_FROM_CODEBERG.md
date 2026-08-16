# Sync full RainTweak sources from Codeberg

The GitHub Actions workflow is ready. **Full Sources/ + Headers/jsi/** must match upstream or the Theos build will fail.

Run this **once** on your PC (with `gh` or git logged into GitHub):

```bash
git clone https://codeberg.org/raincord/RainTweak.git rain-src
cd rain-src

# Keep our workflow + README from GitHub
curl -fsSL -o .github/workflows/deploy.yml \
  https://raw.githubusercontent.com/kmljkjj/RainTweak/main/.github/workflows/deploy.yml
curl -fsSL -o README.md \
  https://raw.githubusercontent.com/kmljkjj/RainTweak/main/README.md
curl -fsSL -o app-repo.json \
  https://raw.githubusercontent.com/kmljkjj/RainTweak/main/app-repo.json || true

git add -A
git commit -m "Sync upstream RainTweak + Deploy workflow"
git remote add github https://github.com/kmljkjj/RainTweak.git
git push -u github main --force
```

Then: **Actions → Deploy Build → Run workflow** with a direct Discord IPA URL.
