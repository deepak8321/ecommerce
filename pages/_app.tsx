import React from 'react';
import {Toaster} from 'react-hot-toast';
import { Layout }  from '../componets';
import '../styles/globals.css';
import { StateContext } from '../context/StateContext';
import { Component } from 'react';

function MyApp({ Component, pageProps }) {
  return (
    <StateContext>
      <Layout>
        <Toaster/>
        <Component {...pageProps} />
      </Layout>
    </StateContext>
  )
}

export default MyApp