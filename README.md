# Portail pédagogique — Mes cours

Ce dossier est un exemple prêt à publier avec **GitHub Pages**.

## Structure

- `index.html` : portail avec arborescence, recherche et lecteur intégré.
- `1-numeration/` : exemple de cours Markdown, démonstration HTML, TP et TD PDF.
- `2-electricite/` et `3-mecanique/` : autres matières d'exemple.

## Prévisualiser sur votre ordinateur

Ouvrez `index.html` dans un navigateur. Pour tester le chargement des fichiers Markdown, il est préférable d'utiliser un petit serveur local (par exemple l'extension Live Server de Visual Studio Code), car certains navigateurs bloquent `fetch()` depuis un fichier local.

## Publier sur GitHub Pages

1. Créez un dépôt GitHub public, par exemple `mes-cours`.
2. Envoyez **tout le contenu** de ce dossier dans le dépôt (pas seulement `index.html`).
3. Dans GitHub : **Settings → Pages**.
4. Dans **Build and deployment**, choisissez **Deploy from a branch**.
5. Choisissez la branche `main` et le dossier `/ (root)`, puis enregistrez.
6. Après quelques minutes, GitHub affichera l'adresse du site dans la section Pages.

Votre portail sera accessible à une adresse du type `https://VOTRE-PSEUDO.github.io/mes-cours/`.

## Ajouter une matière

1. Créez un dossier, par exemple `4-optique/`.
2. Ajoutez vos fichiers : `Cours.md`, `demo.html`, `TP/TP1.pdf`, `TD/TD1.pdf`, etc.
3. Ouvrez `index.html` et ajoutez une entrée dans le tableau `courses` du script JavaScript, en suivant les exemples existants.
4. Envoyez les modifications sur GitHub.

## Formats pris en charge par le portail

- **Markdown (`.md`)** : rendu en lecture dans la page (le portail utilise la bibliothèque Marked chargée depuis un CDN). Un accès au réseau est nécessaire pour cette bibliothèque.
- **HTML (`.html`)** : affichage intégré dans un cadre isolé, ou ouverture dans un nouvel onglet.
- **PDF (`.pdf`)** : affichage intégré selon le navigateur, avec un lien de téléchargement.
- **ODT / ODS / ODP et autres formats** : ajoutez-les comme fichiers téléchargeables. Leur affichage direct dans le navigateur n'est pas garanti.

## Important : accès public

Avec un dépôt public et GitHub Pages, les fichiers et le site sont accessibles publiquement. Ne publiez pas de données personnelles, de copies d'élèves, de corrigés réservés ou de documents soumis à des restrictions de diffusion.

Les liens `download` invitent le navigateur à télécharger le fichier ; selon le navigateur et le type de fichier, certains PDF peuvent néanmoins s'ouvrir dans un nouvel onglet. Le fichier reste téléchargeable depuis GitHub.


## Détection automatique des documents

Le portail lit automatiquement l’arborescence du dépôt public via l’API GitHub. Après avoir ajouté un dossier ou un fichier et validé les changements, actualisez le site : les nouveaux éléments apparaissent dans le menu sans modifier `index.html`. Les fichiers Markdown (`.md`), HTML (`.html`) et PDF (`.pdf`) sont reconnus automatiquement ; les autres fichiers sont proposés au téléchargement.

**Important :** le dépôt doit être public pour que l’API GitHub puisse lire son contenu sans connexion. Sur une adresse GitHub Pages standard (`https://proprietaire.github.io/nom-du-depot/`), le propriétaire et le dépôt sont détectés automatiquement. Si vous utilisez un domaine personnalisé, renseignez `repoOwner` et `repoName` au début du script dans `index.html`.
