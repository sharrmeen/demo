while true; do
  changes=$(git diff --name-only HEAD)

  if [ ! -z "$changes" ]; then
    git add .

    echo "Enter commit message: "
    read commit_message
    git commit -m "$commit_message"
    git push origin
  fi

  sleep 5
done
