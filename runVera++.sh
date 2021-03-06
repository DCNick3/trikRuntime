#!/bin/bash
set -xueo pipefail
tclsh vera++/generatePaths.tcl
vera++ --error -p allRules --root vera++ <vera++/params

git_diff=$( { git diff --diff-filter=d --name-only ${TRAVIS_COMMIT_RANGE:-upstream/master HEAD} || true ; } \
  | xargs -r file -i | sed -e "s|\(.*\):.*text/x-c.*|\1|g" -e "/:/d")
  [[ -z "${git_diff}" ]] || vera++ --error --root vera++ --profile strict <<< "$git_diff"
