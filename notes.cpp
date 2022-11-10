// run:- npx create-next-app
// project name:- ecommerce
// TypeScript:- yes
// eslint:- yes

// install package:- add in package.json ---->   "dependencies": {
    // "@babel/core": "^7.17.9",
    // "@sanity/client": "^3.2.0",
    // "@sanity/image-url": "^1.0.1",
    // "@stripe/stripe-js": "^1.25.0",
    // "canvas-confetti": "^1.5.1",
    // "next-sanity-image": "^3.2.1",
    // "react-hot-toast": "^2.2.0",
    // "react-icons": "^4.3.1",
    // "stripe": "^8.209.0"

// run:- cd ecommerce
// run:-(for install same version):- npm install --legacy-peer-deps
// run:- npm run dev

// copy below code and run in terminal:- if see see error fllow below code.
// npm install -g @sanity/cli
// sanity init --coupon javascriptmastery2022 or npx @sanity/cli init
    // google:- login
    // Project name: ecommerce
    // default dataset configuration? Yes
    // Clean project with no predefined schemas

        // to run stanity:-
        // First: cd /home/kd/Desktop/ecommerce/ecommerce - to enter project’s directory
        // Then:  npx @sanity/cli start - to run Sanity Studio

        // Other helpful commands
        // npx @sanity/cli docs - to open the documentation in a browser
        // npx @sanity/cli manage - to open the project settings in a browser
        // npx @sanity/cli help - to explore the CLI manual

// error remove:-(https://docs.npmjs.com/resolving-eacces-permissions-errors-when-installing-packages-globally) run code below:-
// mkdir ~/.npm-global
// npm config set prefix '~/.npm-global'
// export PATH=~/.npm-global/bin:$PATH
// source ~/.profile
// npm install -g jshint
// NPM_CONFIG_PREFIX=~/.npm-global

// open:- .gitignore
// # dependencies
// node_modules
// .env
// /.pnp
// .pnp.js

// rename ecommerce to sanity_ecommerce
// run:- cd sanity_ecommerce
// run:- npx @sanity/cli start

// create new schemas in sanity_ecommerce:-
// make folder product and code it
// make folder banner and code it
// import in schema.js

// go pages:-
// _app.tsx --> edit code and import global.css
// index.tsx --> edit code 

// go to styles.css:-
// delete:- Home.module.css
// add:- globals.css

// make components:- (Cart,footer,footerBanner,heroBanner,Layout,Navbar, Product, index.js)

// to connect sanity:-
// run:- npx @sanity/cli manage
// create folder(lib) ---> client.js
// (projectId,dataset,apiVersion,useCdn,token) ---> see in:- 
//     projectId: 'hix1f1i4',  ---> product Id
//     dataset: 'production',  ---> dataset
//     apiVersion: '2022-11-04', ---> current date
//     useCdn: true,
//     token: process.env.NEXT_PUBLIC_SANITY_TOKEN   ---> api(create token--> see in.env)


