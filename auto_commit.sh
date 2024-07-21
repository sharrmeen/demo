while true; do
  changes=$(git diff --name-only HEAD)

  if [ ! -z "$changes" ]; then
    git add .

    timestamp=$(date +%Y-%m-%d-%H-%M-%S)
    git commit -m "Auto-commit at $timestamp"

    git push origin
  fi

  sleep 5
done
